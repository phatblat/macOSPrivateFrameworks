//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDModel.h>

@class NSDate, NSString, RDExifNumberPropertyTable;

@interface RDExifNumberProperty : RDModel
{
}

+ (Class)tableClass;
@property(readonly, copy, nonatomic) NSDate *modDate;
@property(readonly, nonatomic) double numberProperty;
@property(readonly, copy, nonatomic) NSString *propertyKey;
@property(readonly, nonatomic) long long versionId;
@property(readonly, nonatomic) RDExifNumberPropertyTable *table;

@end

