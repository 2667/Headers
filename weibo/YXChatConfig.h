//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXModel.h"

@class NSString;

@interface YXChatConfig : YXModel
{
    int _sdkcode;
    long long _all_timeout;
    long long _heartbeat_interval;
    long long _max_fail;
    long long _read_timeout;
    long long _write_timeout;
    NSString *_host;
}

@property(nonatomic) int sdkcode; // @synthesize sdkcode=_sdkcode;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(nonatomic) long long write_timeout; // @synthesize write_timeout=_write_timeout;
@property(nonatomic) long long read_timeout; // @synthesize read_timeout=_read_timeout;
@property(nonatomic) long long max_fail; // @synthesize max_fail=_max_fail;
@property(nonatomic) long long heartbeat_interval; // @synthesize heartbeat_interval=_heartbeat_interval;
@property(nonatomic) long long all_timeout; // @synthesize all_timeout=_all_timeout;
- (void).cxx_destruct;

@end

