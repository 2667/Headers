//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, UIScrollView, YXTrueLoveModuleContainer, YXTrueLoveTitleModule;

@interface YXTrueLoveLiveRoomView : UIView
{
    _Bool isAnchor;
    YXTrueLoveTitleModule *titleModule;
    UILabel *detail;
    UIScrollView *scrollView;
    UIView *anchorInfoLine;
    _Bool _isSpecialFollow;
    long long _type;
    YXTrueLoveModuleContainer *_tlContainer;
    long long _qualificationNeedTime;
    long long _trueLoveFansGroupState;
    unsigned long long _fromType;
}

@property(nonatomic) _Bool isSpecialFollow; // @synthesize isSpecialFollow=_isSpecialFollow;
@property(nonatomic) unsigned long long fromType; // @synthesize fromType=_fromType;
@property(nonatomic) long long trueLoveFansGroupState; // @synthesize trueLoveFansGroupState=_trueLoveFansGroupState;
@property(nonatomic) long long qualificationNeedTime; // @synthesize qualificationNeedTime=_qualificationNeedTime;
@property(retain, nonatomic) YXTrueLoveModuleContainer *tlContainer; // @synthesize tlContainer=_tlContainer;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (void)helpButtonPress;
- (void)showFansGroupText;
- (void)buildRoomViewWithAudienceType:(long long)arg1;
- (void)buildRoomViewWithAnchorType:(long long)arg1;
- (void)updateRoomViewWithType:(long long)arg1 andSpecialFollow:(_Bool)arg2;
- (id)initWithWidth:(double)arg1 height:(double)arg2 type:(long long)arg3 isAnchor:(_Bool)arg4 fromType:(unsigned long long)arg5 isSpecialFollow:(_Bool)arg6;

@end

