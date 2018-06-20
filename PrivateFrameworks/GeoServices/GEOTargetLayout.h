//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface GEOTargetLayout : PBCodable <NSCopying>
{
    int _layoutInfo;
    int _layoutStyle;
    int _uiTarget;
    struct {
        unsigned int layoutInfo:1;
        unsigned int layoutStyle:1;
        unsigned int uiTarget:1;
    } _has;
}

- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsLayoutStyle:(id)arg1;
- (id)layoutStyleAsString:(int)arg1;
@property(nonatomic) BOOL hasLayoutStyle;
@property(nonatomic) int layoutStyle; // @synthesize layoutStyle=_layoutStyle;
- (int)StringAsLayoutInfo:(id)arg1;
- (id)layoutInfoAsString:(int)arg1;
@property(nonatomic) BOOL hasLayoutInfo;
@property(nonatomic) int layoutInfo; // @synthesize layoutInfo=_layoutInfo;
- (int)StringAsUiTarget:(id)arg1;
- (id)uiTargetAsString:(int)arg1;
@property(nonatomic) BOOL hasUiTarget;
@property(nonatomic) int uiTarget; // @synthesize uiTarget=_uiTarget;

@end

