//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

#import "UITextViewDelegate-Protocol.h"
#import "WDPostQuestionViewModelTitleDelegate-Protocol.h"
#import "WDQuestionSuggestionViewDelegate-Protocol.h"

@class NSString, SSThemedImageView, SSThemedTextView, TTIndicatorView, WDPostQuestionTitleTipsView, WDPostQuestionViewModel, WDQuestionSuggestionView;

@interface WDQuestionInputTitleView : SSThemedView <UITextViewDelegate, WDQuestionSuggestionViewDelegate, WDPostQuestionViewModelTitleDelegate>
{
    SSThemedTextView *_textView;
    WDPostQuestionTitleTipsView *_tipsView;
    WDQuestionSuggestionView *_suggestionView;
    SSThemedView *_bottomLine;
    SSThemedImageView *_searchImageView;
    TTIndicatorView *_indicatorView;
    WDPostQuestionViewModel *_viewModel;
}

@property(retain, nonatomic) WDPostQuestionViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) TTIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) SSThemedImageView *searchImageView; // @synthesize searchImageView=_searchImageView;
@property(retain, nonatomic) SSThemedView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) WDQuestionSuggestionView *suggestionView; // @synthesize suggestionView=_suggestionView;
@property(retain, nonatomic) WDPostQuestionTitleTipsView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) SSThemedTextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)suggestionViewDidClickOneCellWithTrackDict:(id)arg1;
- (void)suggestionViewDidScroll:(id)arg1;
- (void)checkTitleWillFinish;
- (void)checkTitleWillStart;
- (void)hideKeyBoard:(id)arg1;
- (void)closeButtonTaped;
- (void)keyboardWillChangeFrame:(id)arg1;
- (struct CGRect)frameForSearchImageView;
- (struct CGRect)frameForTipsView;
- (struct CGRect)frameForBottomLine;
- (struct CGRect)frameForSuggestionView;
- (struct CGRect)frameForInputTextView;
- (void)refreshFrame;
- (void)addKVO;
- (void)refresh;
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

