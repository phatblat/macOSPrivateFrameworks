//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<PXAccessibilityView>, NSString, PXGReusableAccessibilityContentInfo;

@protocol PXGMutableAccessibilityContentInfo <NSObject>
@property(nonatomic) BOOL visible;
@property(copy, nonatomic) NSArray *selectedContent;
@property(nonatomic) BOOL selected;
@property(retain, nonatomic) NSObject<PXAccessibilityView> *view;
@property(retain, nonatomic) id <PXDisplayAsset> asset;
@property(retain, nonatomic) NSString *imageName;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) NSString *text;
@property(nonatomic) long long contentKind;
@property(nonatomic) struct CGRect frame;
- (void)px_accessibilityRemoveAllChildren;
- (void)px_accessibilityAddChildElement:(PXGReusableAccessibilityContentInfo *)arg1;
@end

