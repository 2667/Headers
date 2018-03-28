//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class ALAssetsGroup, NSArray, NSMutableArray, NSString, PHAssetCollection, UIImage, UITableView;

@interface KSAlbumListViewController : KSBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    ALAssetsGroup *_selectedGroup;
    CDUnknownBlockType _assetGroupSelectedBlock;
    PHAssetCollection *_assetCollection;
    CDUnknownBlockType _assetCollectionSelectedBlock;
    NSArray *_assetGroups;
    UITableView *_tableView;
    UIImage *_emptyThumbnailImage;
    NSMutableArray *_assetCollections;
}

@property(retain, nonatomic) NSMutableArray *assetCollections; // @synthesize assetCollections=_assetCollections;
@property(retain, nonatomic) UIImage *emptyThumbnailImage; // @synthesize emptyThumbnailImage=_emptyThumbnailImage;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *assetGroups; // @synthesize assetGroups=_assetGroups;
@property(copy, nonatomic) CDUnknownBlockType assetCollectionSelectedBlock; // @synthesize assetCollectionSelectedBlock=_assetCollectionSelectedBlock;
@property(retain, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property(copy, nonatomic) CDUnknownBlockType assetGroupSelectedBlock; // @synthesize assetGroupSelectedBlock=_assetGroupSelectedBlock;
@property(retain, nonatomic) ALAssetsGroup *selectedGroup; // @synthesize selectedGroup=_selectedGroup;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

