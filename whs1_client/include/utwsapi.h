// Application Softwear Development Kit for Uniontool heart rate sonsor
// API header file version 1.1.0.24
// Copyright (C) 2011 UNIONTOOL CO.
//���ӁF������͂��ׂ�ANSI(�}���`�o�C�g)�ł��D

//version 0.0.2.11 UTWSRRD1GetDataEx�֐��ǉ�
//version 1.1.0.24 1��1���M���[�h�Ή��C���������[�h�����x1�b�X�V���[�h�Ή��̂���
//                 UTWSWHS1GetReceivedMemoryEx�֐��ǉ�
//                 UTWSWHS1Version�֐���ǉ�
//                 UTWSWHS1ReadMemoryEx�֐���ǉ�

#pragma once

#include <windows.h>

#ifdef UTWSAPI_EXPORTS
#define UTWS_API __declspec(dllexport)
#else
#define UTWS_API __declspec(dllimport)
#endif

//�f�o�C�X���ʎq
//��M�@ RRD-1
#define UTWS_RRD_1    0x00000001
//���M�@ WHS-1
#define UTWS_WHS_1    0x00000002

//�G���[���ʎq�̃C���N���[�h
#include "utwserrdef.h"

//�\���̂̃C���N���[�h
#include "utwsstruct.h"

//////����////////////////////////////////

//�G���[����Ԃ�
//�߂�l
//���O�ɔ��������G���[�̃G���[���ʎq��Ԃ��܂��D
//���
//�����Ȉ����Ȃ�΁C�G���[���ʎq������Ԃ��܂��D
//�܂��C�����̃o�b�t�@�T�C�Y���G���[�����������������Ƃ��́C�o�b�t�@�T�C�Y�ɐ؂�l�߂��܂��D
UTWS_API UINT WINAPI UTWSGetErrorMessage(
  //�G���[�Ɋւ���������i�[����镶����o�b�t�@�ւ̃|�C���^
  /*out*/ LPSTR _err_message,
  //�w�肳�ꂽ�o�b�t�@�ɕێ��ł���ő啶�����D�I�[�� NULL �������܂�
  /*in*/ UINT _max_length
);

//�f�o�C�X���J��
//�߂�l
//��������ƃf�o�C�X�ւ̃n���h�����Ԃ�܂��D
//���s����� 0 ���Ԃ�܂��D
//32-bit DLL �ł�32bit�l�C64-bit DLL �ł�64bit�l�ł��邱�Ƃɒ��ӂ��Ă��������D
UTWS_API HANDLE WINAPI UTWSOpenDevice(
  //�I�[�v���������f�o�C�X�̎��ʎq���w�肵�Ă��������D
  /*in*/ UINT _device_id,
  //WHS1-1���I�[�v������Ƃ��́C���Ԗڂ̃f�o�C�X���I�[�v�����邩�w�肵�ĉ������D
  //�P�䂵���Ȃ����Ă��Ȃ��Ƃ��� 0�Ƃ��ĉ������D
  //RRD-1�ł�0�Ƃ��ĉ������D
  /*in*/ UINT _device_no
);

//�f�o�C�X���N���[�Y����
//�߂�l
//��������� TRUE ���Ԃ�D���s����� FALSE ���Ԃ�D
UTWS_API BOOL WINAPI UTWSCloseDevice(
  //�N���[�Y���悤�Ƃ���n���h��
  /*in*/ HANDLE _handle
);

//���ׂẴf�o�C�X���N���[�Y����
//�߂�l
//�Ȃ�
UTWS_API VOID WINAPI UTWSCloseAll(VOID);


//// RRD-1 //////////////////////////////////

//RRD-1�Ńf�[�^��M���J�n����
//�����Ȃ�� TRUE ���Ԃ�
//��2�����ɂ̓C�x���g�I�u�W�F�N�g�ւ̃|�C���^���w�肵�܂��D
//0 ���w�肳�ꂽ�ꍇ�C���̃I�u�W�F�N�g�͎g�p����܂���
//��M����ƁC�C�x���g�̓V�O�i����ԂɂȂ�܂��D
//�V�O�i����Ԃ́CUTWSRRD1GetData�֐��ł��ׂẴf�[�^�����o����Ȃ�����
//��V�O�i���ɂ͂Ȃ�܂���D
//��3�����ɂ̓R�[���o�b�N�֐��ւ̃|�C���^���w�肵�܂��D
//�R�[���o�b�N�֐��̑������̓��[�U��_callBackArg�Ŏw�肵�܂��D
//��M����ƁC���̃R�[���o�b�N�֐����Ăяo����܂��D
//��2�����́C�n���h�����Ԃ�܂��D
//�R�[���o�b�N�֐���typedef���ȉ��̒ʂ�Ƃ��܂�
typedef VOID  (CALLBACK *UTWSRRD1CallBakFunc)(VOID*, VOID*);
UTWS_API BOOL WINAPI UTWSRRD1StartReceiving(
  //�f�o�C�X�̃n���h��
  /*in*/ HANDLE _handle,
  //�C�x���g�I�u�W�F�N�g�̃n���h���D�g�p���Ȃ��Ƃ��� 0
  /*in*/ HANDLE _event,
  //�R�[���o�b�N�֐��ւ̃|�C���^�D�g�p���Ȃ��Ƃ��� 0
  /*in*/ UTWSRRD1CallBakFunc _callBack,
  //�R�[���o�b�N�֐����Ăяo���Ƃ��̑�1�����D
  /*in*/ VOID* _callBackArg
);

//RRD-1�Ńf�[�^�̎�M�𒆎~����
//�����Ȃ�� TRUE ���Ԃ�.
UTWS_API BOOL CALLBACK UTWSRRD1StopReceiving(
  //�f�o�C�X�̃n���h��
  /*in*/ HANDLE _handle
);

//RRD-1�Ŏ�M�����f�[�^�����c���Ă��邩�Ԃ�
//�߂�l�@���s�Ȃ�� -1 ���Ԃ�D
UTWS_API UINT WINAPI UTWSRRD1DataCount(
  //�f�o�C�X�̃n���h��
  /*in*/ HANDLE _handle
 );

//RRD-1�Ŏ�M�����f�[�^������o���D
//DLL���ł́C�ő�1024�̃f�[�^���o�b�t�@�ł���D
//���̊֐������s����ƁC���o���ꂽ�f�[�^���o�b�t�@�����苎����D
//���������ꍇ�� TRUE ��Ԃ��D
//�f�[�^�o�b�t�@�ɉ����Ȃ���ԂŌĂяo�����ƁCFALSE ���������C
//���C�u�����̃G���[�X�e�[�^�X�� UTWS_ERR_EMPTY_DATA �ɐݒ肳��܂��D
//���̂Ƃ���_data�̎w���o�b�t�@�ɕԂ����l�͕s��ł��D
//_data �� 0�̎��́C�������܂���D
UTWS_API BOOL WINAPI UTWSRRD1GetData(
  //�f�o�C�X�̃n���h��
  /*in*/ HANDLE _handle,
  //�f�[�^���󂯂�ƃo�b�t�@�i�\���́j�ւ̃|�C���^
 /*out*/ RRD1Data* _data
 );

//RRD-1�Ŏ�M�����f�[�^������o���D
//UTWSRRD1GetData �̃~���b�P�ʃo�[�W����
UTWS_API BOOL WINAPI UTWSRRD1GetDataEx(
  //�f�o�C�X�̃n���h��
  /*in*/ HANDLE _handle,
  //�f�[�^���󂯂�ƃo�b�t�@�i�\���́j�ւ̃|�C���^
 /*out*/ RRD1DataEx* _data
 );

//RRD-1���I�[�v�����Ă��邩�ǂ������ׂ�
//�߂�l�@�I�[�v�����Ă����TURE�C���Ă��Ȃ���� FALSE ��Ԃ��D
UTWS_API BOOL WINAPI UTWSRRD1IsOpen(
  //�f�o�C�X�̃n���h��
  /*in*/ HANDLE _handle
);

//RRD-1���I�[�v������USB�R�l�N�^������O���ꂽ�Ƃ��ɌĂяo�����
//�R�[���o�b�N�֐���o�^����D
//�����̏ꍇ�� TURE ���������D
UTWS_API BOOL WINAPI UTWSRRD1SetCallBackDisconnect(
  //�f�o�C�X�̃n���h��
  /*in*/ HANDLE _handle,
  //�R�[���o�b�N�֐��ւ̃|�C���^�D�g�p���Ȃ��Ƃ��� 0
  /*in*/ UTWSRRD1CallBakFunc _callBack,
  //�R�[���o�b�N�֐����Ăяo���Ƃ��̈���
  /*in*/ VOID* _callBackArg
);  

//RRD-1�̖����A�h���X���擾����D
//��������� TRUE ��Ԃ��܂��D
//�����ɕ���������ĕԂ����̂�,�o�b�t�@�ɂ�11�����ȏ�m�ۂ��ĉ������D
UTWS_API BOOL WINAPI UTWSRRD1GetLocalAddress(
  //�f�o�C�X�̃n���h��
  /*in*/ HANDLE _handle,
  //���M��A�h���X���Ԃ����o�b�t�@�ւ̃|�C���^
  /*out*/ CHAR* _address
);

//RRD-1�̖����A�h���X��ݒ肵�܂��D
//���������TRUE��Ԃ��܂��D
//������0�^�[�~�l�[�g�̕�����ł��D
UTWS_API BOOL WINAPI UTWSRRD1SetLocalAddress(
  //�f�o�C�X�̃n���h��
  /*in*/ HANDLE _handle,
  //���M��A�h���X�ւ̃|�C���^
  /*in*/ const CHAR* _address
);


//// WHS-1 //////////////////////////////////
//�ڑ�����Ă���WHS-1�̑䐔��Ԃ��܂��D
//�߂�l : �ڑ����Ă���䐔�Ԃ��܂��D���s������ -1 ��Ԃ��܂��D
//_numConnected �ɐڑ��\��䐔���w�肵�ĉ������D
//_timeout �̊Ԃ� 20msec�Ԋu�Őڑ��䐔�𒲂ׂ܂��D
//�ڑ��\��䐔�ɒB�����炷���ɐ��䂪�߂�܂��D
//_numConnected��0�̂Ƃ��́C_timeout�̊ԃf�o�C�X�T���܂��D
//���̂Ƃ���_timeout��ɐ��䂪�߂�܂��D
UTWS_API UINT WINAPI UTWSWHS1CountConnected(
  //�ڑ��\��䐔�D����̂Ƃ��́@0
  /*in*/ UINT _numConnected,
  //�^�C���A�E�g�C�P��msec
  /*in*/ UINT _timeout
);

//WHS-1 �̐ݒ�l��ǂݎ��
//��������� TRUE ��Ԃ��D
UTWS_API BOOL WINAPI UTWSWHS1ReadConfig(
  //�f�o�C�X�̃n���h��
  /*in*/ HANDLE _handle,
  //�ݒ�����i�[����\���̂ւ̃|�C���^
  /*out*/ WHS1Config* _readConfig
);

//WHS-1 �̐ݒ�l����������
//��������� TRUE ��Ԃ��D
UTWS_API BOOL WINAPI UTWSWHS1WriteConfig(
  //�f�o�C�X�̃n���h��
  /*in*/ HANDLE _handle,
  //�ݒ�����i�[����\���̂ւ̃|�C���^
  /*in*/ const WHS1Config* _readConfig,
  //���������[�h�Ń������t���̂Ƃ� 0: �擪����㏑���C1: �t���ɂȂ����i�K�Ŏ~�߂�
  //���������[�h�ɐݒ肵�Ȃ��Ƃ��͖��������
  /*in*/ BYTE _mem_mode,
  //�ȉ����ݎ�����ݒ�.���������[�h�ɐݒ肵�Ȃ��Ƃ��͖��������̂� 0 �ł��܂�Ȃ��D
  /*in*/ WORD _year,
  /*in*/ WORD _month,
  /*in*/ WORD _day,
  /*in*/ WORD _hour,
  /*in*/ WORD _min,
  /*in*/ WORD _sec
);

//WHS-1�̖������M��A�h���X���擾���܂��D
//��������� TRUE ��Ԃ��܂��D
//�����ɕ���������ĕԂ����̂�,�o�b�t�@�ɂ�11�����ȏ�m�ۂ��ĉ������D
UTWS_API BOOL WINAPI UTWSWHS1GetDestinationAddress(
  //�f�o�C�X�̃n���h��
  /*in*/ HANDLE _handle,
  //���M��A�h���X���Ԃ����o�b�t�@�ւ̃|�C���^
  /*out*/ CHAR* _address
);

//WHS-1�̖������M��A�h���X��ݒ肵�܂��D
//���������TRUE��Ԃ��܂��D
//������0�^�[�~�l�[�g�̕�����ł��D
UTWS_API BOOL WINAPI UTWSWHS1SetDestinationAddress(
  //�f�o�C�X�̃n���h��
  /*in*/ HANDLE _handle,
  //���M��A�h���X�ւ̃|�C���^
  /*in*/ const CHAR* _address
);

//WHS-1 ���烁�����̓��e���_�E�����[�h�����C�u�������̃������ɕۑ����܂��D
//�߂�l: �ǂݍ��񂾃f�[�^����Ԃ��܂��D�G���[�̂Ƃ��̖߂�l��-1�ł��D
UTWS_API UINT WINAPI UTWSWHS1ReadMemory(
  //�f�o�C�X�̃n���h��
  /*in*/ HANDLE _handle
);

//WHS-1 ���烁�����̓��e���_�E�����[�h�����C�u�������̃������ɕۑ����܂��D
//�߂�l: �G���[�̂Ƃ��̖߂�l��FALSE�ł��D
UTWS_API BOOL WINAPI UTWSWHS1ReadMemoryEx(
  //�f�o�C�X�̃n���h��
  /*in*/ HANDLE _handle,
  //�ǂݏo�����f�[�^�̃w�b�_��
  /*out*/ WHS1MemDataHeader* _header
);

//WHS-1 ���烁�����̓��e���_�E�����[�h�����C�u�������̃������ɕۑ������f�[�^��
//�����o���D
//�߂�l : ���s�̂Ƃ�false
UTWS_API BOOL WINAPI UTWSWHS1GetReceivedMemory(
  //�f�o�C�X�̃n���h��
  /*in*/ HANDLE _handle,
  //�ǂݏo�����f�[�^�̃w�b�_��
  /*out*/ WHS1MemDataHeader* _header,
  //�ǂݏo�����f�[�^�̃f�[�^���CUTWSWHS1ReadMemory�֐��œ���ꂽ
  //�f�[�^�������̔z������炩���ߗp�ӂ��ĉ������D
  //0�Ȃ�΃f�[�^��ǂݍ��݂܂���D
  /*out*/ WHS1EcgData* _data,
  //�p�ӂ����z��WHS1EcgData[]�̃T�C�Y
  /*in*/ UINT _size,
  //TRUE�̂Ƃ�1���R�[�h������̎��v�𒲐����܂�
  /*in*/ BOOL _time_adjust
);
UTWS_API BOOL WINAPI UTWSWHS1GetReadedMemory(
  HANDLE _handle, WHS1MemDataHeader* _header, WHS1EcgData* _data, UINT _size, BOOL _time_adjust
);

//WHS-1 ���烁�����̓��e���_�E�����[�h�����C�u�������̃������ɕۑ������f�[�^��
//�t�@�C���ɏ����o��.
//�߂�l : ���s�̂Ƃ�FALSE
UTWS_API BOOL WINAPI UTWSWHS1SaveReceivedMemory(
  //�f�o�C�X�̃n���h��
  /*in*/ HANDLE _handle,
  //�p�X��
  /*in*/ LPCSTR _path,
  //TRUE�̂Ƃ�1���R�[�h������̎��v�𒲐����܂�
  /*in*/ BOOL _time_adjust
);
UTWS_API BOOL WINAPI UTWSWHS1SaveReadedMemory(
  HANDLE _handle, LPCSTR _path, BOOL _time_adjust
);

//WHS-1 ���烁�����̓��e���_�E�����[�h�����C�u�������̃������ɕۑ������f�[�^��
//�����o���D(�����x1�b�X�V���[�h���ɁC�{�����x�Ɓ[�����x��Ɨ����Ď擾�ł���j
//�߂�l : ���s�̂Ƃ�false
UTWS_API BOOL WINAPI UTWSWHS1GetReceivedMemoryEx(
  //�f�o�C�X�̃n���h��
  /*in*/ HANDLE _handle,
  //�ǂݏo�����f�[�^�̃w�b�_��
  /*out*/ WHS1MemDataHeader* _header,
  //�ǂݏo�����f�[�^�̃f�[�^���CUTWSWHS1ReadMemory�֐��œ���ꂽ
  //�f�[�^�������̔z������炩���ߗp�ӂ��ĉ������D
  //0�Ȃ�΃f�[�^��ǂݍ��݂܂���D
  /*out*/ WHS1EcgDataEx* _data,
  //�p�ӂ����z��WHS1EcgData[]�̃T�C�Y
  /*in*/ UINT _size,
  //TRUE�̂Ƃ�1���R�[�h������̎��v�𒲐����܂�
  /*in*/ BOOL _time_adjust
);

//WHS-1�̃o�[�W������Ԃ��D
UTWS_API BOOL WINAPI UTWSWHS1Version(
  //�f�o�C�X�̃n���h��
  /*in*/ HANDLE _handle,
  //�o�[�W����
  /*out*/ UINT* _ver
);

