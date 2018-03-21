//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FMScene, UITapGestureRecognizer;
@protocol _KSMagicFaceComponentEventsCaptureViewDelegate;

@interface _KSMagicFaceComponentEventsCaptureView : UIView
{
    FMScene *_magicFaceScene;
    UITapGestureRecognizer *_tapGestureRecognizer;
    id <_KSMagicFaceComponentEventsCaptureViewDelegate> _delegate;
}

@property(nonatomic) __weak id <_KSMagicFaceComponentEventsCaptureViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) __weak FMScene *magicFaceScene; // @synthesize magicFaceScene=_magicFaceScene;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
