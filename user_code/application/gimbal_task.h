/**
  ****************************(C) COPYRIGHT 2021 *******************************
  * @file       gimbal_task.c/h
  * @brief      gimbal control task, because use the euler angle calculated by
  *             gyro sensor, range (-pi,pi), angle set-point must be in this
  *             range.gimbal has two control mode, gyro mode and enconde mode
  *             gyro mode: use euler angle to control, encond mode: use enconde
  *             angle to control. and has some special mode:cali mode, motionless
  *             mode.
  *             �����̨��������������̨ʹ�������ǽ�����ĽǶȣ��䷶Χ�ڣ�-pi,pi��
  *             �ʶ�����Ŀ��ǶȾ�Ϊ��Χ����������ԽǶȼ���ĺ�������̨��Ҫ��Ϊ2��
  *             ״̬�������ǿ���״̬�����ð��������ǽ������̬�ǽ��п��ƣ�����������
  *             ״̬��ͨ����������ı���ֵ���Ƶ�У׼�����⻹��У׼״̬��ֹͣ״̬�ȡ�
  * @note
  * @history
  *  Version    Date            Author          Modification
  *  V1.0.0     NOV-03-2022     WSJ      1. doing
  *  V2.0.0     JUN-21-2023     NJY      
  *
  @verbatim
  ==============================================================================
 *        �ء�����������|
 *   ����/��7������ �ϣ�/
 *   �� /�������� ������
 *   ������Z ��,���������� /`�c
 *   ���������������c���� /������
 *   �� Y����������`�� /����/
 *   ��?��?���񡡡�??������/
 *   ��()�� �ء�������|���ܡ�
 *   ����>? ?_�� ���� �� ����
 *   �� / �ء��� /��?��| �ܣ�
 *   �� �c_?����(_���� ������
 *   ����7��������������|��
 *   �������Dr����`?�D��
 *               Ƥ������
 *               ������BUG!
  ==============================================================================
  @endverbatim
  ****************************(C) COPYRIGHT 2021 *******************************
  */
#ifndef GIMBAL_BOARD_GIMBAL_TASK_H
#define GIMBAL_BOARD_GIMBAL_TASK_H
#include "cmsis_os.h"
#include "INS.h"
#include "gimbal.h"

//����ʼ����һ��ʱ��
#define GIMBAL_TASK_INIT_TIME 201

#define GIMBAL_CONTROL_TIME_MS 2


extern void gimbal_task(void *pvParameters);

extern bool_t gimbal_imu_open_flag ;

#endif 