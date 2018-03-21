//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBTextGestureRecognizer.h"

@class NSTimer;

@interface TBTextLongPressRecognizer : TBTextGestureRecognizer
{
    double _minimumPressDuration;
    double _allowableMovement;
    NSTimer *_longPressTimer;
    struct CGPoint _initialPoint;
}

@property(retain, nonatomic) NSTimer *longPressTimer; // @synthesize longPressTimer=_longPressTimer;
@property(nonatomic) struct CGPoint initialPoint; // @synthesize initialPoint=_initialPoint;
@property(nonatomic) double allowableMovement; // @synthesize allowableMovement=_allowableMovement;
@property(nonatomic) double minimumPressDuration; // @synthesize minimumPressDuration=_minimumPressDuration;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)reset;
- (void)longPressed:(id)arg1;
- (_Bool)isTouchCloseToInitialPoint:(id)arg1;

@end
