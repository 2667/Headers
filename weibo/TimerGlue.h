//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSTimer;

@interface TimerGlue : NSObject
{
    NSTimer *_timer;
    struct Timer *_context;
}

- (void).cxx_destruct;
- (void)doTimer:(id)arg1;
- (void)stop;
- (void)startWithMillisecond:(unsigned int)arg1;
- (id)initWithContext:(struct Timer *)arg1;

@end

