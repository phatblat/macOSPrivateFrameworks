//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDModel.h>

@class NSData, NSString, RDAdminDataTable;

@interface RDAdminData : RDModel
{
}

+ (Class)tableClass;
@property(nonatomic) BOOL persistAfterRebuild;
@property(nonatomic) long long storedDataType;
@property(copy, nonatomic) NSData *blobPropertyValue;
@property(copy, nonatomic) NSString *propertyValue;
@property(copy, nonatomic) NSString *propertyName;
@property(copy, nonatomic) NSString *propertyArea;
@property(readonly, nonatomic) RDAdminDataTable *table;

@end

