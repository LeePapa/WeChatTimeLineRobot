/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"

@class NSString, NSMutableDictionary, NSRecursiveLock;

@interface MMWCResFileData : MMObject {
	int _fileDescriptor;
	NSRecursiveLock* _lock;
	long long _fileSize;
	NSMutableDictionary* _dictResData;
	NSString* _filePath;
}
-(void).cxx_destruct;
-(BOOL)updateResData:(id)data resUrl:(id)url version:(id)version retOffset:(long long*)offset retChunkLength:(unsigned*)length;
-(id)getResData:(id)data version:(id)version offset:(long long)offset chunkLength:(unsigned long)length dataSize:(unsigned long)size;
-(id)keyForUrl:(id)url version:(id)version;
-(void)dealloc;
-(id)initWithFilePath:(id)filePath;
@end
