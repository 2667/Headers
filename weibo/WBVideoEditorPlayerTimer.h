//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CADisplayLink;

@interface WBVideoEditorPlayerTimer : NSObject
{
    CADisplayLink *_timer;
    id _target;
    SEL _action;
    _Bool _needPassTimer;
    _Bool _paused;
}

@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
- (void).cxx_destruct;
- (void)addTarget:(id)arg1 action:(SEL)arg2 needPassTimer:(_Bool)arg3;
- (void)update;
- (id)init;

@end

