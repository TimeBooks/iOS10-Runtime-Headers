/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSharedDocumentItem : BRCDocumentItem

@property (nonatomic, readonly) NSString *enclosurePathRelativeToRoot;
@property (nonatomic, readonly) bool isShareAcceptationFault;

- (id)aliasItemIDForAppLibrary:(id)arg1;
- (id)asSharedDocument;
- (void)deleteShareAcceptationFault;
- (id)enclosurePathRelativeToRoot;
- (bool)getPrivateAppLibraryAliasURL:(id*)arg1 aliasContainer:(id*)arg2;
- (id)initAsShareAcceptationFaultWithFilename:(id)arg1 itemID:(id)arg2 appLibrary:(id)arg3;
- (bool)isShareAcceptationFault;
- (bool)isSharedDocument;
- (void)markLiveFromStageAsShareAcceptationFault;
- (id)parentFileID;
- (float)prepareDeletionSyncUpWithOperation:(id)arg1 defaults:(id)arg2;
- (void)stageShareAcceptationFaultWithName:(id)arg1;

@end
