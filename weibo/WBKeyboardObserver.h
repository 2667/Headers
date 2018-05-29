//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WBKeyboardObserver : NSObject
{
    double _animationDuration;
    long long _animationCurve;
    struct CGRect _frameBegin;
    struct CGRect _frameEnd;
}

+ (id)sharedObserver;
@property(nonatomic) long long animationCurve; // @synthesize animationCurve=_animationCurve;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) struct CGRect frameEnd; // @synthesize frameEnd=_frameEnd;
@property(nonatomic) struct CGRect frameBegin; // @synthesize frameBegin=_frameBegin;
- (void)keyboardDidChangeNotification:(id)arg1;
- (id)init;
- (void)dealloc;

@end

