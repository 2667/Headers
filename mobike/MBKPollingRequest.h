//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MBKPollingRequest : NSObject
{
    // Error parsing type: , name: httpPoliingInterval
    // Error parsing type: , name: timeoutDuration
    // Error parsing type: , name: httpRequest
    // Error parsing type: , name: mqttRequest
    // Error parsing type: , name: mqttResultType
    // Error parsing type: , name: workingQueue
    // Error parsing type: , name: handlingBlock
    // Error parsing type: , name: cancelledBlock
    // Error parsing type: , name: httpPollingTimer
    // Error parsing type: , name: timeoutTimer
    // Error parsing type: , name: polledCount
    // Error parsing type: , name: startTime
    // Error parsing type: , name: running
    // Error parsing type: , name: cycleRetainSelf
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)timeoutedWithTimer:(id)arg1;
- (void)timerFiredWithTimer:(id)arg1;
- (void)cancel;
- (void)start;
- (void)setCancelledBlock:(CDUnknownBlockType)arg1;
- (void)setHanldingBlock:(CDUnknownBlockType)arg1;
- (id)initWithHTTPRequest:(id)arg1 MQTTRequest:(id)arg2 MQTTResultType:(long long)arg3 queue:(id)arg4;
@property(nonatomic, readonly) long long polledHttpRequestCount;
@property(nonatomic) double timeoutDuration; // @synthesize timeoutDuration;
@property(nonatomic) double httpPoliingInterval; // @synthesize httpPoliingInterval;

@end

