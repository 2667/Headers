//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCardSingleTextView.h"

@class UIButton;

@interface WBPageCardSearchTextSuggestionView : WBPageCardSingleTextView
{
    UIButton *_removeButton;
}

+ (struct UIEdgeInsets)edgeInsetsViewOutside;
@property(retain, nonatomic) UIButton *removeButton; // @synthesize removeButton=_removeButton;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setPageCard:(id)arg1;
- (id)suggestionCard;
- (void)removeButtonPressed:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

