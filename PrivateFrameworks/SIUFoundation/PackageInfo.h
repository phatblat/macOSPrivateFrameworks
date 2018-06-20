//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableData, NSOperation, NSString;

@interface PackageInfo : NSObject
{
    NSString *_packagePath;
    NSMutableArray *_choicesArray;
    NSMutableData *_plistData;
    BOOL _readComplete;
    NSOperation *_readOperation;
}

+ (id)sizeOfPackage:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSOperation *readOperation; // @synthesize readOperation=_readOperation;
@property(retain, nonatomic) NSString *packagePath; // @synthesize packagePath=_packagePath;
@property(retain, nonatomic) NSMutableArray *choicesArray; // @synthesize choicesArray=_choicesArray;
- (void)waitUntilLoaded;
- (void)setState:(id)arg1 ofChildren:(id)arg2 forKey:(id)arg3;
- (void)setInitialStateOfChildren:(id)arg1;
- (void)readInfoForPackage;
- (void)postFlightInitialLoadForPackage:(id)arg1;
- (void)getData:(id)arg1;
- (long long)installedSizeInKbytesForPackageChoice:(id)arg1;
- (long long)maxInstalledSizeInKbytesForPackage:(id)arg1;
- (void)includePkgs:(id)arg1 fromChoice:(id)arg2;
- (id)cleansedPathsForPackagePaths:(id)arg1;
- (BOOL)array:(id)arg1 containsString:(id)arg2;
- (void)addUniqueObjectsFromArray:(id)arg1 toArray:(id)arg2;
- (id)installFootprintInKbWithChoices;
- (id)sizeOfPackageOnDiskInBytesWithError:(id *)arg1;
- (id)maxInstallFootprintInKb;
- (id)includedPackages;
- (id)choicesXML;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPackage:(id)arg1;

@end

