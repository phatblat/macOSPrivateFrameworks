//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CRKCardPresentationConfiguration;

@protocol CRKCardPresenting <NSObject>
@property(readonly, nonatomic) id <CRCard> card;
@property(copy, nonatomic) CRKCardPresentationConfiguration *configuration;
- (void)setConfiguration:(CRKCardPresentationConfiguration *)arg1 animated:(BOOL)arg2 completion:(void (^)(BOOL, NSError *))arg3;
@end
