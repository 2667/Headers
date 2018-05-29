//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class WBFPlayerBlockTimer;
@protocol OS_dispatch_queue;

@interface WBFPlayerTimeObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _block;
    double _interval;
    WBFPlayerBlockTimer *_timer;
}

@property(retain, nonatomic) WBFPlayerBlockTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)callbackImmediately;
- (void)stopObserving;
- (void)startObserving;
- (void)dealloc;

@end

