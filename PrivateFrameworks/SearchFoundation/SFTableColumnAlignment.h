//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "SFTableColumnAlignment.h"

@class NSData, NSDictionary, NSString;

@interface SFTableColumnAlignment : NSObject <SFTableColumnAlignment, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int columnAlignment:1;
        unsigned int dataAlignment:1;
        unsigned int isEqualWidth:1;
    } _has;
    BOOL _isEqualWidth;
    int _columnAlignment;
    int _dataAlignment;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL isEqualWidth; // @synthesize isEqualWidth=_isEqualWidth;
@property(nonatomic) int dataAlignment; // @synthesize dataAlignment=_dataAlignment;
@property(nonatomic) int columnAlignment; // @synthesize columnAlignment=_columnAlignment;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)hasIsEqualWidth;
- (BOOL)hasDataAlignment;
- (BOOL)hasColumnAlignment;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
