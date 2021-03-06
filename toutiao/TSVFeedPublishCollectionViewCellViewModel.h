//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TSVPublishStatusOriginalData, UIImage;

@interface TSVFeedPublishCollectionViewCellViewModel : NSObject
{
    _Bool _isFailed;
    UIImage *_coverImage;
    NSString *_uploadingProgress;
    NSString *_uploadingStr;
    NSString *_failedStr;
    TSVPublishStatusOriginalData *_model;
}

@property(retain, nonatomic) TSVPublishStatusOriginalData *model; // @synthesize model=_model;
@property(nonatomic) _Bool isFailed; // @synthesize isFailed=_isFailed;
@property(copy, nonatomic) NSString *failedStr; // @synthesize failedStr=_failedStr;
@property(copy, nonatomic) NSString *uploadingStr; // @synthesize uploadingStr=_uploadingStr;
@property(copy, nonatomic) NSString *uploadingProgress; // @synthesize uploadingProgress=_uploadingProgress;
@property(retain, nonatomic) UIImage *coverImage; // @synthesize coverImage=_coverImage;
- (void).cxx_destruct;
- (void)handleDeleteButtonClick;
- (void)handleRetryButtonClick;
- (void)bindWithModel;
- (id)initWithModel:(id)arg1;

@end

