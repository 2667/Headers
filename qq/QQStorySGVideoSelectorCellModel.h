//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSMutableArray, NSString, TBDateVideoCollectionModel;

@interface QQStorySGVideoSelectorCellModel : QQModel
{
    _Bool _refreshDataImmediately;
    unsigned int _collectionIndex;
    TBDateVideoCollectionModel *_collectionData;
    NSMutableArray *_scrollViewDataSource;
    NSString *_unionID;
}

@property(copy, nonatomic) NSString *unionID; // @synthesize unionID=_unionID;
@property(nonatomic) unsigned int collectionIndex; // @synthesize collectionIndex=_collectionIndex;
@property(nonatomic) _Bool refreshDataImmediately; // @synthesize refreshDataImmediately=_refreshDataImmediately;
@property(retain, nonatomic) NSMutableArray *scrollViewDataSource; // @synthesize scrollViewDataSource=_scrollViewDataSource;
@property(retain, nonatomic) TBDateVideoCollectionModel *collectionData; // @synthesize collectionData=_collectionData;
- (void)dealloc;

@end

