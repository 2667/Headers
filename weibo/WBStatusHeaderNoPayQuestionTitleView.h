//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, WBTimelineAttributedTextView;

@interface WBStatusHeaderNoPayQuestionTitleView : UIView
{
    WBTimelineAttributedTextView *questionTextView;
    NSString *_questionText;
}

+ (double)heightOfContentText:(id)arg1 constraintWidth:(double)arg2;
@property(copy, nonatomic) NSString *questionText; // @synthesize questionText=_questionText;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

