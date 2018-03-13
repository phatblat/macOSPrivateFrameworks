//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDTable.h>

@class LiKeyPath;

@interface RDFaceGroupFaceTable : RDTable
{
    LiKeyPath *_faceGroupIdKeyPath;
    LiKeyPath *_faceIdKeyPath;
}

+ (id)tableClassName;
+ (id)tableName;
+ (id)modelName;
+ (Class)modelClass;
@property(readonly, nonatomic) LiKeyPath *faceIdKeyPath; // @synthesize faceIdKeyPath=_faceIdKeyPath;
@property(readonly, nonatomic) LiKeyPath *faceGroupIdKeyPath; // @synthesize faceGroupIdKeyPath=_faceGroupIdKeyPath;
- (void).cxx_destruct;
- (void)declareProperties;
- (id)initWithTableId:(unsigned long long)arg1 tableType:(unsigned char)arg2 withLibrary:(id)arg3;
- (unsigned long long)saveOrder;
- (id)notifyUpdateKeyPathAtoms;
- (unsigned long long *)faultedKeyPath;

@end

