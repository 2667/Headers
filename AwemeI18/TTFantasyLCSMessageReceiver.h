//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTPushMessageReceiver.h"

@interface TTFantasyLCSMessageReceiver : TTPushMessageReceiver
{
}

- (void)dispatchHeartBeatInfo:(const basic_string_7c0a1c0b *)arg1 payloadType:(const basic_string_7c0a1c0b *)arg2 payload:(const basic_string_7c0a1c0b *)arg3 seqid:(unsigned long long)arg4 logid:(unsigned long long)arg5 headers:(shared_ptr_6eb7ad64)arg6;
- (int)dispatch:(int)arg1 method:(int)arg2 payloadEncoding:(const basic_string_7c0a1c0b *)arg3 payloadType:(const basic_string_7c0a1c0b *)arg4 payload:(const basic_string_7c0a1c0b *)arg5 seqid:(unsigned long long)arg6 logid:(unsigned long long)arg7 headers:(shared_ptr_6eb7ad64)arg8;

@end

