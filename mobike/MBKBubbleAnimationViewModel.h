//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MBKPopupMarketing, NSString, shareInfoDetail;

@interface MBKBubbleAnimationViewModel : NSObject
{
    long long _showType;
    NSString *_bubbleContentStr;
    NSString *_bubbleContentColorStr;
    NSString *_bubbleIconUrlStr;
    NSString *_bubbleStartColorStr;
    NSString *_bubbleEndColorStr;
    unsigned long long _bubbleTimeOutSeconds;
    long long _type;
    NSString *_backImg;
    NSString *_redirectUrl;
    shareInfoDetail *_shareInfo;
    NSString *_marketingId;
    MBKPopupMarketing *_model;
}

@property(retain, nonatomic) MBKPopupMarketing *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *marketingId; // @synthesize marketingId=_marketingId;
@property(retain, nonatomic) shareInfoDetail *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(copy, nonatomic) NSString *redirectUrl; // @synthesize redirectUrl=_redirectUrl;
@property(copy, nonatomic) NSString *backImg; // @synthesize backImg=_backImg;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long bubbleTimeOutSeconds; // @synthesize bubbleTimeOutSeconds=_bubbleTimeOutSeconds;
@property(copy, nonatomic) NSString *bubbleEndColorStr; // @synthesize bubbleEndColorStr=_bubbleEndColorStr;
@property(copy, nonatomic) NSString *bubbleStartColorStr; // @synthesize bubbleStartColorStr=_bubbleStartColorStr;
@property(copy, nonatomic) NSString *bubbleIconUrlStr; // @synthesize bubbleIconUrlStr=_bubbleIconUrlStr;
@property(copy, nonatomic) NSString *bubbleContentColorStr; // @synthesize bubbleContentColorStr=_bubbleContentColorStr;
@property(copy, nonatomic) NSString *bubbleContentStr; // @synthesize bubbleContentStr=_bubbleContentStr;
@property(nonatomic) long long showType; // @synthesize showType=_showType;
- (void).cxx_destruct;
- (void)setupViewModel;
- (id)initWithModel:(id)arg1;
- (id)init;

@end

