//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDate, NSMutableAttributedString, WBTimelineAttributedTextView;
@protocol MMBarageSpriteViewDelegate;

@interface MMBarageSpriteView : UIView
{
    _Bool _isSendByMe;
    int _status;
    long long _rowNumber;
    id <MMBarageSpriteViewDelegate> _delegate;
    double _during;
    double _enterSecond;
    double _startSecond;
    double _totalDistance;
    WBTimelineAttributedTextView *_textView;
    NSDate *_startTime;
    NSMutableAttributedString *_attributeDescription;
    struct CGRect _originFrame;
    struct CGRect _targetFrame;
    struct CGRect _canvasBounds;
}

@property(nonatomic) struct CGRect canvasBounds; // @synthesize canvasBounds=_canvasBounds;
@property(retain, nonatomic) NSMutableAttributedString *attributeDescription; // @synthesize attributeDescription=_attributeDescription;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) WBTimelineAttributedTextView *textView; // @synthesize textView=_textView;
@property(readonly, nonatomic) double totalDistance; // @synthesize totalDistance=_totalDistance;
@property(nonatomic) double startSecond; // @synthesize startSecond=_startSecond;
@property(nonatomic) double enterSecond; // @synthesize enterSecond=_enterSecond;
@property(nonatomic) double during; // @synthesize during=_during;
@property(nonatomic) _Bool isSendByMe; // @synthesize isSendByMe=_isSendByMe;
@property(nonatomic) struct CGRect targetFrame; // @synthesize targetFrame=_targetFrame;
@property(nonatomic) struct CGRect originFrame; // @synthesize originFrame=_originFrame;
@property(nonatomic) __weak id <MMBarageSpriteViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long rowNumber; // @synthesize rowNumber=_rowNumber;
@property(nonatomic) int status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)pauseAnimation;
- (void)startAnimation;
- (void)layoutSubviews;
- (id)initWithAttributeDescription:(id)arg1 andCanvasBounds:(struct CGRect)arg2 andDuring:(double)arg3 andRowNumber:(long long)arg4 isSendByMe:(_Bool)arg5;

@end

