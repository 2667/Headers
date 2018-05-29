//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXModel.h"

@class NSString;

@interface YXLMCDetailShowListModel : YXModel
{
    NSString *_memberid;
    NSString *_nickname;
    NSString *_desc;
    NSString *_avatar;
    NSString *_ytypevt;
    long long _isfocus;
    NSString *_remain_duration;
    long long _status;
    NSString *_start_time;
    NSString *_end_time;
    NSString *_openid;
    long long _isFollowing;
    long long _verified_type;
}

@property(nonatomic) long long verified_type; // @synthesize verified_type=_verified_type;
@property(nonatomic) long long isFollowing; // @synthesize isFollowing=_isFollowing;
@property(retain, nonatomic) NSString *openid; // @synthesize openid=_openid;
@property(retain, nonatomic) NSString *end_time; // @synthesize end_time=_end_time;
@property(retain, nonatomic) NSString *start_time; // @synthesize start_time=_start_time;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *remain_duration; // @synthesize remain_duration=_remain_duration;
@property(nonatomic) long long isfocus; // @synthesize isfocus=_isfocus;
@property(retain, nonatomic) NSString *ytypevt; // @synthesize ytypevt=_ytypevt;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *memberid; // @synthesize memberid=_memberid;
- (void).cxx_destruct;
- (id)showStartTime;

@end

