//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OCPPackage.h>

@class NSMutableDictionary, OISFUZipArchive;

@interface OCPZipPackage : OCPPackage
{
    OISFUZipArchive *mArchive;
    NSMutableDictionary *mParts;
}

- (void).cxx_destruct;
- (void)resetPartForLocation:(id)arg1;
- (id)partForLocation:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithArchive:(id)arg1;

@end
