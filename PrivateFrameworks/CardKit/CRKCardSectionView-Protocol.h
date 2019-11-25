//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSView<CRKComposableView>;

@protocol CRKCardSectionView <NSObject>
+ (struct CGSize)sizeThatFitsCardSection:(id <CRCardSection>)arg1 boundingSize:(struct CGSize)arg2;
@property(nonatomic) __weak NSView<CRKComposableView> *composedSuperview;
@property(copy, nonatomic) NSString *cardSectionViewIdentifier;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)removeFromComposedSuperview;
@end

