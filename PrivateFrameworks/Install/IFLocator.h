//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IFLocator : NSObject
{
    void *context;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } lock;
}

+ (id)sharedLocator;
- (id)resolveTokenizedPathIntoBomPath:(id)arg1 withLocalNamespace:(id)arg2 withRoot:(id)arg3;
- (id)resolveTokenizedPathIntoFSPath:(id)arg1 withLocalNamespace:(id)arg2;
- (id)tokenFromTokenizedPath:(id)arg1 withLocalNamespace:(id)arg2;
- (void)setToken:(id)arg1 toValue:(id)arg2;
- (id)tokenValue:(id)arg1 atIndex:(unsigned int)arg2;
- (unsigned int)tokenValueCount:(id)arg1;
- (id)tokenValue:(id)arg1;
- (void)preResolveAllTokensInArray:(id)arg1;
- (void)preResolveAllTokensForPaths:(id)arg1 withLocalNamespace:(id)arg2;
- (id)tokenFromName:(id)arg1 inNamespace:(id)arg2;
- (void)setTokenValuesInNamespace:(id)arg1 withDictionary:(id)arg2;
- (id)tokenValuesInNamespace:(id)arg1;
- (void)addTokenDefinition:(id)arg1 withName:(id)arg2 inNameSpace:(id)arg3;
- (void)addTokenDefinitionDictionary:(id)arg1 inNamespace:(id)arg2;
- (void)interrupt;
- (void)setFilesystemScanTimeout:(id)arg1;
- (void)setTargetMountPoint:(id)arg1;
- (id)absolutePathWithPath:(id)arg1 withRoot:(id)arg2;
- (id)bomStylePathWithPath:(id)arg1 withRoot:(id)arg2;
- (void)dealloc;
- (id)init;

@end

