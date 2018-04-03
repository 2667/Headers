//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "KSBubbleContentView-Protocol.h"
#import "KSChartletView-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class KSAdvTextViewContentView, KSTextLayoutEngine, NSString, UIButton;
@protocol KSChartletViewDelegate;

@interface KSAdvTextView : UIView <UITextViewDelegate, KSChartletView, KSBubbleContentView>
{
    _Bool _rotateAndScale;
    struct CGPoint _dragStartPoint;
    struct CGPoint _centerBeforeDragStart;
    double _dragStartDistance;
    double _dragStartAngle;
    KSTextLayoutEngine *_textLayoutEngine;
    _Bool _active;
    id <KSChartletViewDelegate> _delegate;
    double _bubbleScale;
    double _rotateAngle;
    KSAdvTextViewContentView *_contentView;
    UIView *_frameBoxView;
    UIButton *_deleteButton;
    UIButton *_rotateButton;
}

+ (id)shapeViewWithShape:(id)arg1;
@property(retain, nonatomic) UIButton *rotateButton; // @synthesize rotateButton=_rotateButton;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UIView *frameBoxView; // @synthesize frameBoxView=_frameBoxView;
@property(retain, nonatomic) KSAdvTextViewContentView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) double rotateAngle; // @synthesize rotateAngle=_rotateAngle;
@property(nonatomic) double bubbleScale; // @synthesize bubbleScale=_bubbleScale;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) __weak id <KSChartletViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
@property(nonatomic) struct CGPoint charletCenter;
- (void)setCenter:(struct CGPoint)arg1;
- (struct CGPoint)centerThatFits:(struct CGPoint)arg1;
@property(nonatomic) _Bool editing; // @dynamic editing;
- (void)applyScale:(double)arg1 rotateAngle:(double)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didTapTextView:(id)arg1;
- (void)didDragBubbleView:(id)arg1;
- (void)didPinchBubbleView:(id)arg1;
- (void)didRotateBubbleView:(id)arg1;
- (void)didTapDeleteButton:(id)arg1;
- (_Bool)hasText;
@property(retain, nonatomic) NSString *text; // @dynamic text;
- (void)aspectScaleText:(id)arg1;
- (void)verticalScaleText:(id)arg1;
- (void)horizontalScaleText:(id)arg1;
- (struct CGSize)maxBubbleImageSize;
- (struct CGSize)defaultTextSize;
- (void)adjustTextViewFont;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (id)chartlet;
- (id)shape;
- (id)buttonWithImage:(id)arg1 highlightImage:(id)arg2 action:(SEL)arg3;
- (void)didMoveToWindow;
- (void)setToolButtonsHidden:(_Bool)arg1;
- (void)setUpToolButtons;
- (void)setUpContentViewWithStorage:(id)arg1;
- (id)initWithChartlet:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

