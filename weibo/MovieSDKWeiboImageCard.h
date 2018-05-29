//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MovieSDKMutiPicView.h"

#import "MovieSDKMutiPicViewDelegate-Protocol.h"
#import "MovieSDKWeiboCellSubViewProtcol-Protocol.h"

@class MovieSDKBaseTableViewCell, MovieSDKPictureCardData, NSArray, NSString, UIImage;
@protocol MovieSDKTableViewCellDelegate;

@interface MovieSDKWeiboImageCard : MovieSDKMutiPicView <MovieSDKWeiboCellSubViewProtcol, MovieSDKMutiPicViewDelegate>
{
    NSArray *_imgs;
    UIImage *_emptyImg;
    MovieSDKPictureCardData *_data;
    id <MovieSDKTableViewCellDelegate> _responsDelegate;
    MovieSDKBaseTableViewCell *_contentCell;
}

+ (double)preferredHeightForData:(id)arg1 fitWidth:(double)arg2;
@property(nonatomic) __weak MovieSDKBaseTableViewCell *contentCell; // @synthesize contentCell=_contentCell;
@property(nonatomic) __weak id <MovieSDKTableViewCellDelegate> responsDelegate; // @synthesize responsDelegate=_responsDelegate;
- (void).cxx_destruct;
- (void)picPressed:(unsigned long long)arg1 Frames:(id)arg2;
- (void)setRespondDelegate:(id)arg1 contentCell:(id)arg2;
- (void)sizeToFitWidth:(double)arg1;
- (void)updateWithData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

