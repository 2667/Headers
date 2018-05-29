//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class WBCameraCaptureRingView;
@protocol WBCameraCaptureButtonViewDlegate;

@interface WBCameraCaptureButtonView : UIView
{
    unsigned long long _currentState;
    id <WBCameraCaptureButtonViewDlegate> _delegate;
    UIView *_roundView;
    WBCameraCaptureRingView *_ringView;
    double _startTime;
    double _timeInterval;
}

+ (id)cameraButton;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) WBCameraCaptureRingView *ringView; // @synthesize ringView=_ringView;
@property(retain, nonatomic) UIView *roundView; // @synthesize roundView=_roundView;
@property(nonatomic) __weak id <WBCameraCaptureButtonViewDlegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
- (void).cxx_destruct;
- (void)updateEndTime;
- (_Bool)blockPanNavigationGesture:(id)arg1 withTouch:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)beginCaptureAnimation;
- (void)endTouchDownAnimation;
- (void)beginTouchDownAnimation;
- (void)updateUIElements;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

