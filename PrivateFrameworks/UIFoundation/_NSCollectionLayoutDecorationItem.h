//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIFoundation/_NSCollectionLayoutItem.h>

#import "NSCopying.h"
#import "_NSCollectionLayoutAPIRespresenting.h"

@class NSString, _NSCollectionLayoutAnchor;

@interface _NSCollectionLayoutDecorationItem : _NSCollectionLayoutItem <NSCopying, _NSCollectionLayoutAPIRespresenting>
{
    NSString *_elementKind;
    _NSCollectionLayoutAnchor *_containerAnchor;
    long long _zIndex;
    Class _registrationViewClass;
    BOOL _isBackgroundDecoration;
}

+ (id)decorationItemWithSize:(id)arg1 elementKind:(id)arg2 containerAnchor:(id)arg3;
+ (id)backgroundDecorationItemWithElementKind:(id)arg1;
@property(nonatomic) long long zIndex; // @synthesize zIndex=_zIndex;
- (void).cxx_destruct;
- (id)_apiRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic, setter=_setRegistrationViewClass:) Class _registrationViewClass;
- (id)initWithSize:(id)arg1 elementKind:(id)arg2 containerAnchor:(id)arg3 zIndex:(long long)arg4 contentInsets:(struct NSDirectionalEdgeInsets)arg5 edgeSpacing:(id)arg6 name:(id)arg7 registrationViewClass:(Class)arg8 isBackgroundDecoration:(BOOL)arg9;

@end

