//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSDictionary, NSString, WBArticleInteractUserInfo, WBQAActionButton, WBQAEnterAlert;

@interface WBQAArticleExtendModel : WBModelObject
{
    long long _mLevel;
    long long _status;
    NSString *_objectId;
    NSString *_qaFingerprinting;
    WBQAEnterAlert *_alert;
    NSString *_tip;
    NSString *_statusDesc;
    WBQAActionButton *_watchActionButton;
    WBQAActionButton *_answerActionButton;
    long long _isReward;
    WBQAActionButton *_rewardActionButton;
    WBArticleInteractUserInfo *_articleInteractUserInfo;
    long long _isVisible;
    NSDictionary *_shareContent;
    unsigned long long _isNativeWatch;
    WBQAActionButton *_nativeWatchButton;
}

@property(retain, nonatomic) WBQAActionButton *nativeWatchButton; // @synthesize nativeWatchButton=_nativeWatchButton;
@property(nonatomic) unsigned long long isNativeWatch; // @synthesize isNativeWatch=_isNativeWatch;
@property(retain, nonatomic) NSDictionary *shareContent; // @synthesize shareContent=_shareContent;
@property(nonatomic) long long isVisible; // @synthesize isVisible=_isVisible;
@property(retain, nonatomic) WBArticleInteractUserInfo *articleInteractUserInfo; // @synthesize articleInteractUserInfo=_articleInteractUserInfo;
@property(retain, nonatomic) WBQAActionButton *rewardActionButton; // @synthesize rewardActionButton=_rewardActionButton;
@property(nonatomic) long long isReward; // @synthesize isReward=_isReward;
@property(retain, nonatomic) WBQAActionButton *answerActionButton; // @synthesize answerActionButton=_answerActionButton;
@property(retain, nonatomic) WBQAActionButton *watchActionButton; // @synthesize watchActionButton=_watchActionButton;
@property(copy, nonatomic) NSString *statusDesc; // @synthesize statusDesc=_statusDesc;
@property(copy, nonatomic) NSString *tip; // @synthesize tip=_tip;
@property(retain, nonatomic) WBQAEnterAlert *alert; // @synthesize alert=_alert;
@property(copy, nonatomic) NSString *qaFingerprinting; // @synthesize qaFingerprinting=_qaFingerprinting;
@property(copy, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long mLevel; // @synthesize mLevel=_mLevel;
- (void).cxx_destruct;
- (void)updateNativeWatchButtonCheckboxesValue:(id)arg1;
- (_Bool)updateWithDictionary:(id)arg1;

@end

