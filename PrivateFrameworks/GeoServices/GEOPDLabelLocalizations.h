//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface GEOPDLabelLocalizations : PBCodable <NSCopying>
{
    NSMutableArray *_localizedStrings;
}

+ (Class)localizedStringType;
@property(retain, nonatomic) NSMutableArray *localizedStrings; // @synthesize localizedStrings=_localizedStrings;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)localizedStringAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedStringsCount;
- (void)addLocalizedString:(id)arg1;
- (void)clearLocalizedStrings;
- (id)bestLocalizedName;

@end

