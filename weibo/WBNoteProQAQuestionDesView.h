//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBNoteProQADescView.h"

@class NSMutableAttributedString, UILabel, WBStyleButton;
@protocol WBNoteProQAQuestionButtonDelegate;

@interface WBNoteProQAQuestionDesView : WBNoteProQADescView
{
    NSMutableAttributedString *attrString;
    id <WBNoteProQAQuestionButtonDelegate> _delegate;
    UILabel *_questionLabel;
    UILabel *_questionFirstLabel;
    WBStyleButton *_questionButton;
}

@property(retain, nonatomic) WBStyleButton *questionButton; // @synthesize questionButton=_questionButton;
@property(retain, nonatomic) UILabel *questionFirstLabel; // @synthesize questionFirstLabel=_questionFirstLabel;
@property(retain, nonatomic) UILabel *questionLabel; // @synthesize questionLabel=_questionLabel;
@property(nonatomic) __weak id <WBNoteProQAQuestionButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setDataModel:(id)arg1 withPriceString:(id)arg2 questionDesViewType:(long long)arg3 conversionHint:(id)arg4;
- (void)setDataModel:(id)arg1 withPriceString:(id)arg2;
- (void)questionButtonAction:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

