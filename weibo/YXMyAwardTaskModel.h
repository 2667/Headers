//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXLiveBaseModuleModel.h"

@class YXMyAwardDayTaskLookModel, YXMyAwardDayTaskOtherModel, YXMyAwardDayTaskTitleModel, YXMyAwardFixedTaskModel;

@interface YXMyAwardTaskModel : YXLiveBaseModuleModel
{
    YXMyAwardDayTaskTitleModel *_dayTaskTitle_Model;
    YXMyAwardDayTaskLookModel *_dayTaskLook_Model;
    YXMyAwardDayTaskOtherModel *_dayTaskOther_Model;
    YXMyAwardFixedTaskModel *_fixedTask_Model;
}

@property(retain, nonatomic) YXMyAwardFixedTaskModel *fixedTask_Model; // @synthesize fixedTask_Model=_fixedTask_Model;
@property(retain, nonatomic) YXMyAwardDayTaskOtherModel *dayTaskOther_Model; // @synthesize dayTaskOther_Model=_dayTaskOther_Model;
@property(retain, nonatomic) YXMyAwardDayTaskLookModel *dayTaskLook_Model; // @synthesize dayTaskLook_Model=_dayTaskLook_Model;
@property(retain, nonatomic) YXMyAwardDayTaskTitleModel *dayTaskTitle_Model; // @synthesize dayTaskTitle_Model=_dayTaskTitle_Model;
- (void).cxx_destruct;

@end

