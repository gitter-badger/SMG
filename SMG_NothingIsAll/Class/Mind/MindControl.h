//
//  MindControll.h
//  SMG_NothingIsAll
//
//  Created by 贾  on 2017/5/6.
//  Copyright © 2017年 XiaoGang. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 *  MARK:--------------------Mind引擎--------------------
 *  驱动input
 *  驱动output
 */
@class MindAAA,MindBBB;
@interface MindControl : NSObject

@property (strong,nonatomic) MindAAA *mindAAA;
@property (strong,nonatomic) MindBBB *mindBBB;

/**
 *  MARK:--------------------mine饥饿--------------------
 *  产生充电需求
 */
-(void) commitFromMineForHunger;

@end
