// Application Softwear Development Kit for Uniontool heart rate sonsor
// API header file version 1.1.0.24
// Copyright (C) 2011 UNIONTOOL CO.
//���ӁF������͂��ׂ�ANSI(�}���`�o�C�g)�ł��D

// version 0.0.1.21 RRD1DataEx�֐��ǉ�
// version 1.1.0.24 1��1���M���[�h�Ή��C���������[�h�����x1�b�X�V���[�h�Ή�
//                  struct WHS1EcgDataEx �ǉ�

#pragma once

#include <Windows.h>

//�\����

//RRD1��M�f�[�^�̗v�f
typedef struct RRD1EcgData_
{
  //ECG�f�[�^
  WORD ecg;
  //���x
  double temp;
  //�����x
  double acc_x, acc_y, acc_z;
} RRD1EcgData;

//RRD1��M�f�[�^
typedef struct RRD1Data_
{
  //����
  WORD year, month, day, hour, min, sec;
  //�ݒ���
  BYTE mode;
  //��ID
  BYTE tempID;
  //���o�ԍ�
  BYTE sendedID;

  //�S���Z���T�̃��[�h�@0:�S���g�` 1:�S���Ԋu 2:�S����
  BYTE ecg_mode;
  //�����x�Z���T���[�h 0:�ړ����� 1:�s�[�N�z�[���h
  BYTE acc_mode;
  //���[�o�b�e���[���@0:���� 1:���[�o�b�e���[
  BYTE lowbattery;
  //1��1���M���ǂ���. 0:1��1���M 1:3��1���M(�ʏ탂�[�h)
  BYTE sampling_freq;

  //�L���ȃf�[�^��
  BYTE data_count;
  //�f�[�^
  RRD1EcgData data[10];
} RRD1Data;

//RRD1��M�f�[�^(�~���b�擾�o�[�W����
typedef struct RRD1DataEx_
{
  //����
  WORD year, month, day, hour, min, sec, msec;
  //�ݒ���
  BYTE mode;
  //��ID
  BYTE tempID;
  //���o�ԍ�
  BYTE sendedID;

  //�S���Z���T�̃��[�h�@0:�S���g�` 1:�S���Ԋu 2:�S����
  BYTE ecg_mode;
  //�����x�Z���T���[�h 0:�ړ����� 1:�s�[�N�z�[���h
  BYTE acc_mode;
  //���[�o�b�e���[���@0:���� 1:���[�o�b�e���[
  BYTE lowbattery;
  //1��1���M���ǂ���. 0:1��1���M 1:3��1���M(�ʏ탂�[�h)
  BYTE sampling_freq;

  //�L���ȃf�[�^��
  BYTE data_count;
  //�f�[�^
  RRD1EcgData data[10];

  //���̑��̏����i�[���邽�߂̃��U�[�u
  BYTE reserve[10];
} RRD1DataEx;

//WHS-1�̐ݒ���
typedef struct WHS1Config_
{
  //1 : �S���g�` 2: �S���Ԋu 1000Hz 3: �S���Ԋu (�����x1�b�X�V) 4: �S�����f�[�^
  BYTE ecg_mode;
  //0 : �������[�h 1: ���������[�h
  BYTE mode;
  //�t���b�V���������݉�
  UINT flush_right_count;
  //�����x���[�h  0:�ړ����� 1: �s�[�N�z�[���h
  BYTE acc_mode;
  //���x�I�t�Z�b�g
  CHAR tmp_offset;
  //CPU ID
  UINT cpu_id;
  //�Z�b�g�V���A��ID
  UINT set_serial_id;
  //��ID
  BYTE temp_id;
  //�������������ݕ��� 0:�㏑�� 1:��~
  BYTE mem_mode;
} WHS1Config;

//WHS1�������f�[�^�̗v�f
typedef struct WHS1EcgData_
{
  //����(year��0�̂Ƃ������f�[�^�͂���܂���)
  WORD year, month, day, hour, mi, sec, msec;
  //ECG�f�[�^
  WORD ecg;
  //���x
  double temp;
  //�����x
  double acc_x, acc_y, acc_z;
} WHS1EcgData;

//WHS-1�̃������f�[�^
typedef struct WHS1MemDataHeader_
{
  //1 : �S���g�` 2: �S���Ԋu 1000Hz 3: �S���Ԋu (�����x1�b�X�V) 4: �S�����f�[�^
  BYTE ecg_mode;
   //�����x���[�h 0: �s�[�N�z�[���h 1:�ړ�����
  BYTE acc_mode; 
  //��ID
  BYTE temp_id;
  //�f�[�^��
  UINT data_count;
} WHS1MemDataHeader;

//WHS1�������f�[�^�̗v�f(�����x1�b�X�V���C�v���X�C�}�C�i�X�����x�擾�̂���)
typedef struct WHS1EcgDataEx_
{
  //����(year��0�̂Ƃ������f�[�^�͂���܂���)
  WORD year, month, day, hour, mi, sec, msec;
  //ECG�f�[�^
  WORD ecg;
  //���x
  double temp;
  //�����x
  double acc_px, acc_py, acc_pz; //�v���X���ő�l
  double acc_nx, acc_ny, acc_nz; //�}�C�i�X���ő�l
} WHS1EcgDataEx;
