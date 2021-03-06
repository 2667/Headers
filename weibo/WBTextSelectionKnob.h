//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIImage, UILongPressGestureRecognizer, UIPanGestureRecognizer, WBLoupeView;
@protocol WBTextSelectionKnobDelegate;

@interface WBTextSelectionKnob : UIView <UIGestureRecognizerDelegate>
{
    _Bool _isEndKnob;
    id <WBTextSelectionKnobDelegate> _delegate;
    WBLoupeView *_loupeView;
    UIImage *_dotImage;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    struct CGPoint _dragStartPoint;
    struct CGRect _caretFrame;
}

@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(nonatomic) struct CGPoint dragStartPoint; // @synthesize dragStartPoint=_dragStartPoint;
@property(retain, nonatomic) UIImage *dotImage; // @synthesize dotImage=_dotImage;
@property(nonatomic) struct CGRect caretFrame; // @synthesize caretFrame=_caretFrame;
@property(nonatomic) _Bool isEndKnob; // @synthesize isEndKnob=_isEndKnob;
@property(retain, nonatomic) WBLoupeView *loupeView; // @synthesize loupeView=_loupeView;
@property(nonatomic) __weak id <WBTextSelectionKnobDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setDragPointNeedsUpdate;
- (void)draged:(id)arg1;
- (void)dragedToPoint:(struct CGPoint)arg1 ended:(_Bool)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)dotFrameWithDotSize:(struct CGSize)arg1;
- (void)updateWithCaretFrame:(struct CGRect)arg1 isEndKnob:(_Bool)arg2;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

