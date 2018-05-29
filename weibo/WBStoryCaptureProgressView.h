//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CALayer, CAShapeLayer, NSMutableArray;

@interface WBStoryCaptureProgressView : UIView
{
    CDStruct_bd4dca50 _flags;
    _Bool _needSeparator;
    _Bool _isIPhoneX;
    double _progress;
    CAShapeLayer *_backgroundLayer;
    CALayer *_minDurationIndicator;
    CAGradientLayer *_gradientLayer;
    CAShapeLayer *_gradientMaskLayer;
    NSMutableArray *_separatorLayers;
    UIView *_fakeFlashView;
    double _fakeProgress;
}

@property(nonatomic) _Bool isIPhoneX; // @synthesize isIPhoneX=_isIPhoneX;
@property(nonatomic) double fakeProgress; // @synthesize fakeProgress=_fakeProgress;
@property(retain, nonatomic) UIView *fakeFlashView; // @synthesize fakeFlashView=_fakeFlashView;
@property(retain, nonatomic) NSMutableArray *separatorLayers; // @synthesize separatorLayers=_separatorLayers;
@property(retain, nonatomic) CAShapeLayer *gradientMaskLayer; // @synthesize gradientMaskLayer=_gradientMaskLayer;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) CALayer *minDurationIndicator; // @synthesize minDurationIndicator=_minDurationIndicator;
@property(retain, nonatomic) CAShapeLayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(nonatomic) _Bool needSeparator; // @synthesize needSeparator=_needSeparator;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)updateWithCache:(id)arg1 maxDuration:(double)arg2;
- (void)deleteLastSegment;
- (void)stopFlashIfNeeded;
- (void)flashLastSegment;
- (void)removeAllSeparators;
- (void)addSeparatorAtProgress:(double)arg1;
- (void)stopRecording;
- (void)startRecording;
- (void)reset;
- (id)initWithFrame:(struct CGRect)arg1;

@end

