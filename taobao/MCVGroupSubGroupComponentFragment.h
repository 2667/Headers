//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCBaseFragment.h"

@class MCVGroupSubGroupPresenter;

@interface MCVGroupSubGroupComponentFragment : MCBaseFragment
{
    MCVGroupSubGroupPresenter *_vGroupSubGroupPresenter;
}

@property(retain, nonatomic) MCVGroupSubGroupPresenter *vGroupSubGroupPresenter; // @synthesize vGroupSubGroupPresenter=_vGroupSubGroupPresenter;
- (void).cxx_destruct;
- (void)loadDataAndRefreshUI;
- (void)setViewLayout:(id)arg1;
- (id)getConponetViews;
- (id)initWithFrame:(struct CGRect)arg1 bizKey:(id)arg2 baseVC:(id)arg3 pageName:(id)arg4 config:(id)arg5 vGroupID:(id)arg6;

@end
