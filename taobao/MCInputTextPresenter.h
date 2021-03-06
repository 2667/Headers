//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCBaseInputPresenter.h"

#import "HPGrowingTextViewDelegate-Protocol.h"

@class MCInputTextItemView;

@interface MCInputTextPresenter : MCBaseInputPresenter <HPGrowingTextViewDelegate>
{
    MCInputTextItemView *_itemView;
}

@property(retain, nonatomic) MCInputTextItemView *itemView; // @synthesize itemView=_itemView;
- (void).cxx_destruct;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (void)sendMessage:(id)arg1;
- (_Bool)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)growingTextView:(id)arg1 didChangeHeight:(float)arg2;
- (_Bool)growingTextViewShouldBeginEditing:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (long long)itemPresenterType;
- (id)view;
- (id)inputItemView;
- (void)viewDidLoad;
- (void)dealloc;

@end

