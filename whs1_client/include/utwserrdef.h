// Application Softwear Development Kit for Uniontool heart rate sonsor
// Error ID definition header file version 1.0.1.21
// Copyright (C) 2011 UNIONTOOL CO.

// utwserr.h
// SHINOZAKI Ryo

#pragma once

//�G���[���ʎq
//����(�G���[�Ȃ�)
#define UTWS_NO_ERR                 0x00000000
//�����s���̃G���[
#define UTWS_ERR_UNKNOWN            0xffffffff
//�w�肳�ꂽ�f�o�C�X���ʎq�͑��݂��Ȃ��D
#define UTWS_ERR_UNKNOWN_DEVICE_ID  0x00000001
//�w�肳�ꂽ�f�o�C�X�͂��łɃI�[�v������Ă��܂��D
#define UTWS_ERR_ALREADY_OPEN       0x00000002
#define UTWS_ERR_HAVE_OPEND_ALREDY  0x00000002
//�f�o�C�X���J�����Ƃ��ł��Ȃ������D
#define UTWS_ERR_CANNOT_OPEN        0x00000003
//�f�o�C�X�������Ă��܂��D
#define UTWS_ERR_CLOSED             0x00000004
//�f�o�C�X�̃��[�h��ύX�ł��Ȃ�����
#define UTWS_ERR_CANNOT_CHANGE_MODE 0x00000005
//�����ȃn���h�����w�肳�ꂽ
#define UTWS_ERR_INVALID_HANDLE     0x00000006
//���o���\�ȃf�[�^������܂���
#define UTWS_ERR_EMPTY_DATA         0x00000007
//���s���܂���
#define UTWS_ERR_FAILED             0x00000008
//�^�C���A�E�g
#define UTWS_ERR_TIMEOUT            0x00000009
//�f�o�C�X�̃V���A���ԍ����擾�ł��܂���ł���
#define UTWS_ERR_CANNOT_GET_SERIAL  0x0000000A
//�t�@�C�����J���܂���ł���
#define UTWS_ERR_CANNOT_OPEN_FILE   0x0000000B
//����A�h���X���Ԉ���Ă��܂�
#define UTWS_ERR_BAD_DESTINATION_ADDRESS 0x0000000C
//FTD2XX.DLL�����݂��܂���
#define UTWS_ERR_CANNOT_LOAD_FTD2XX 0x0000000D
//�擾���邢�͕ۑ��\�ȃf�[�^�����݂��܂���
#define UTWS_ERR_NO_DATA            0x0000000E