//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class AWEGalleryBlankView, NSString, UICollectionView;
@protocol IndexedSubscript><NSFastEnumeration;

@interface AWEGalleryViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _isEliteVersion;
    UICollectionView *_collectionView;
    AWEGalleryBlankView *_blankContentView;
    id <IndexedSubscript><NSFastEnumeration> _dataSource;
    CDUnknownBlockType _completion;
    unsigned long long _uploadResourceType;
}

@property(nonatomic) unsigned long long uploadResourceType; // @synthesize uploadResourceType=_uploadResourceType;
@property(nonatomic) _Bool isEliteVersion; // @synthesize isEliteVersion=_isEliteVersion;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) id <IndexedSubscript><NSFastEnumeration> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) AWEGalleryBlankView *blankContentView; // @synthesize blankContentView=_blankContentView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (id)privateVideoURLWithInfo:(id)arg1;
- (void)selectAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)filterImage:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)filterVideoUrlAsset:(id)arg1 md5:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)clickToSetup;
- (_Bool)prefersStatusBarHidden;
- (void)checkAuthorizationAndReload;
- (void)viewDidLoad;
- (void)p_reload;
- (void)reloadData;
- (void)showBlankViewIfNeededWithPermission:(_Bool)arg1;
- (id)initWithType:(unsigned long long)arg1 isEliteVersion:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

