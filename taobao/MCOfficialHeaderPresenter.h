//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCBasePresenter.h"

#import "MCOfficialContentNavigationBarDelegate-Protocol.h"
#import "MCOfficialHeaderViewDelegate-Protocol.h"

@class NSString, UIView;
@protocol MCOfficialHeaderModelProtocol, MCOfficialHeaderViewProtocol;

@interface MCOfficialHeaderPresenter : MCBasePresenter <MCOfficialHeaderViewDelegate, MCOfficialContentNavigationBarDelegate>
{
    id <MCOfficialHeaderModelProtocol> _model;
    UIView<MCOfficialHeaderViewProtocol> *_headerView;
    NSString *_officialID;
}

@property(retain, nonatomic) NSString *officialID; // @synthesize officialID=_officialID;
@property(retain, nonatomic) UIView<MCOfficialHeaderViewProtocol> *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) id <MCOfficialHeaderModelProtocol> model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)rightAction;
- (void)leftAction;
- (void)entyAciton:(id)arg1;
- (id)getView;
- (void)viewDidLoad;
- (id)initWithFrame:(struct CGRect)arg1 baseVC:(id)arg2 bizKey:(id)arg3 officialID:(id)arg4 model:(id)arg5 view:(id)arg6;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
