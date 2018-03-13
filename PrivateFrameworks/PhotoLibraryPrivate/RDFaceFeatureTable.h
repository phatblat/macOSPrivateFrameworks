//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDTable.h>

@class LiKeyPath;

@interface RDFaceFeatureTable : RDTable
{
    LiKeyPath *_detectedFaceIdKeyPath;
    LiKeyPath *_featureIndexKeyPath;
    LiKeyPath *_xKeyPath;
    LiKeyPath *_yKeyPath;
    LiKeyPath *_confidenceKeyPath;
}

+ (id)tableClassName;
+ (id)tableName;
+ (id)modelName;
+ (Class)modelClass;
@property(readonly, nonatomic) LiKeyPath *confidenceKeyPath; // @synthesize confidenceKeyPath=_confidenceKeyPath;
@property(readonly, nonatomic) LiKeyPath *yKeyPath; // @synthesize yKeyPath=_yKeyPath;
@property(readonly, nonatomic) LiKeyPath *xKeyPath; // @synthesize xKeyPath=_xKeyPath;
@property(readonly, nonatomic) LiKeyPath *featureIndexKeyPath; // @synthesize featureIndexKeyPath=_featureIndexKeyPath;
@property(readonly, nonatomic) LiKeyPath *detectedFaceIdKeyPath; // @synthesize detectedFaceIdKeyPath=_detectedFaceIdKeyPath;
- (void).cxx_destruct;
- (void)declareProperties;
- (id)initWithTableId:(unsigned long long)arg1 tableType:(unsigned char)arg2 withLibrary:(id)arg3;
- (id)notifyUpdateKeyPathAtoms;
- (unsigned long long *)faultedKeyPath;

@end

