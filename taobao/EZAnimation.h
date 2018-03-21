//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol EZAnimationDelegate;

@interface EZAnimation : NSObject
{
    _Bool _mStateInStart;
    _Bool _mStateInEnd;
    float _mStateElapseTimeMS;
    id _target;
    id <EZAnimationDelegate> _delegate;
    long long _mDurationMS;
    CDUnknownFunctionPointerType _timingFunction;
}

@property(nonatomic) _Bool mStateInEnd; // @synthesize mStateInEnd=_mStateInEnd;
@property(nonatomic) _Bool mStateInStart; // @synthesize mStateInStart=_mStateInStart;
@property(nonatomic) CDUnknownFunctionPointerType timingFunction; // @synthesize timingFunction=_timingFunction;
@property(nonatomic) float mStateElapseTimeMS; // @synthesize mStateElapseTimeMS=_mStateElapseTimeMS;
@property(nonatomic) long long mDurationMS; // @synthesize mDurationMS=_mDurationMS;
@property(nonatomic) __weak id <EZAnimationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)eventUpdate:(double)arg1 direction:(int)arg2;
- (void)mixValueFrom:(float)arg1 to:(float)arg2;
- (void)resetToStart;
- (void)resetToEnd;
- (_Bool)isInEnd;
- (_Bool)isInStart;
- (void)reset;
- (id)init;

@end
