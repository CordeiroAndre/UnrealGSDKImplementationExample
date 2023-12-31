// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPlayFabJsonObject;
struct FMultiplayerRolloverContainerRegistryCredentialsResponse;
struct FMultiplayerRequestPartyServiceResponse;
struct FMultiplayerRequestMultiplayerServerResponse;
struct FMultiplayerListVirtualMachineSummariesResponse;
struct FMultiplayerListTitleMultiplayerServersQuotaChangesResponse;
struct FMultiplayerListQosServersForTitleResponse;
struct FMultiplayerListPartyQosServersResponse;
struct FMultiplayerListContainerImageTagsResponse;
struct FMultiplayerListContainerImagesResponse;
struct FMultiplayerListCertificateSummariesResponse;
struct FMultiplayerListBuildSummariesResponse;
struct FMultiplayerListBuildAliasesResponse;
struct FMultiplayerListAssetSummariesResponse;
struct FMultiplayerListMultiplayerServersResponse;
struct FMultiplayerGetTitleMultiplayerServersQuotasResponse;
struct FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse;
struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse;
struct FMultiplayerGetRemoteLoginEndpointResponse;
struct FMultiplayerGetMultiplayerServerLogsResponse;
struct FMultiplayerGetMultiplayerServerDetailsResponse;
struct FMultiplayerGetContainerRegistryCredentialsResponse;
struct FMultiplayerGetBuildResponse;
struct FMultiplayerGetAssetUploadUrlResponse;
struct FMultiplayerGetAssetDownloadUrlResponse;
struct FMultiplayerEnableMultiplayerServersForTitleResponse;
struct FMultiplayerEmptyResponse;
struct FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse;
struct FMultiplayerCreateRemoteUserResponse;
struct FMultiplayerCreateBuildWithProcessBasedServerResponse;
struct FMultiplayerCreateBuildWithManagedContainerResponse;
struct FMultiplayerCreateBuildWithCustomContainerResponse;
struct FMultiplayerBuildAliasDetailsResponse;
struct FMultiplayerListServerBackfillTicketsForPlayerResult;
struct FMultiplayerListMatchmakingTicketsForPlayerResult;
struct FMultiplayerJoinMatchmakingTicketResult;
struct FMultiplayerGetServerBackfillTicketResult;
struct FMultiplayerGetQueueStatisticsResult;
struct FMultiplayerGetMatchmakingTicketResult;
struct FMultiplayerGetMatchResult;
struct FMultiplayerCreateServerBackfillTicketResult;
struct FMultiplayerCreateMatchmakingTicketResult;
struct FMultiplayerCancelServerBackfillTicketResult;
struct FMultiplayerCancelMatchmakingTicketResult;
struct FMultiplayerCancelAllServerBackfillTicketsForPlayerResult;
struct FMultiplayerCancelAllMatchmakingTicketsForPlayerResult;
struct FMultiplayerSubscribeToLobbyResourceResult;
struct FMultiplayerJoinLobbyResult;
struct FMultiplayerGetLobbyResult;
struct FMultiplayerFindLobbiesResult;
struct FMultiplayerFindFriendLobbiesResult;
struct FMultiplayerLobbyEmptyResult;
struct FMultiplayerCreateLobbyResult;
#ifdef PLAYFAB_PlayFabMultiplayerModelDecoder_generated_h
#error "PlayFabMultiplayerModelDecoder.generated.h already included, missing '#pragma once' in PlayFabMultiplayerModelDecoder.h"
#endif
#define PLAYFAB_PlayFabMultiplayerModelDecoder_generated_h

#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerModelDecoder_h_26_SPARSE_DATA
#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerModelDecoder_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execdecodeRolloverContainerRegistryCredentialsResponseResponse); \
	DECLARE_FUNCTION(execdecodeRequestPartyServiceResponseResponse); \
	DECLARE_FUNCTION(execdecodeRequestMultiplayerServerResponseResponse); \
	DECLARE_FUNCTION(execdecodeListVirtualMachineSummariesResponseResponse); \
	DECLARE_FUNCTION(execdecodeListTitleMultiplayerServersQuotaChangesResponseResponse); \
	DECLARE_FUNCTION(execdecodeListQosServersForTitleResponseResponse); \
	DECLARE_FUNCTION(execdecodeListPartyQosServersResponseResponse); \
	DECLARE_FUNCTION(execdecodeListContainerImageTagsResponseResponse); \
	DECLARE_FUNCTION(execdecodeListContainerImagesResponseResponse); \
	DECLARE_FUNCTION(execdecodeListCertificateSummariesResponseResponse); \
	DECLARE_FUNCTION(execdecodeListBuildSummariesResponseResponse); \
	DECLARE_FUNCTION(execdecodeListBuildAliasesResponseResponse); \
	DECLARE_FUNCTION(execdecodeListAssetSummariesResponseResponse); \
	DECLARE_FUNCTION(execdecodeListMultiplayerServersResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetTitleMultiplayerServersQuotasResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetTitleMultiplayerServersQuotaChangeResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetTitleEnabledForMultiplayerServersStatusResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetRemoteLoginEndpointResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetMultiplayerServerLogsResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetMultiplayerServerDetailsResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetContainerRegistryCredentialsResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetBuildResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetAssetUploadUrlResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetAssetDownloadUrlResponseResponse); \
	DECLARE_FUNCTION(execdecodeEnableMultiplayerServersForTitleResponseResponse); \
	DECLARE_FUNCTION(execdecodeEmptyResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateTitleMultiplayerServersQuotaChangeResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateRemoteUserResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateBuildWithProcessBasedServerResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateBuildWithManagedContainerResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateBuildWithCustomContainerResponseResponse); \
	DECLARE_FUNCTION(execdecodeBuildAliasDetailsResponseResponse); \
	DECLARE_FUNCTION(execdecodeListServerBackfillTicketsForPlayerResultResponse); \
	DECLARE_FUNCTION(execdecodeListMatchmakingTicketsForPlayerResultResponse); \
	DECLARE_FUNCTION(execdecodeJoinMatchmakingTicketResultResponse); \
	DECLARE_FUNCTION(execdecodeGetServerBackfillTicketResultResponse); \
	DECLARE_FUNCTION(execdecodeGetQueueStatisticsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetMatchmakingTicketResultResponse); \
	DECLARE_FUNCTION(execdecodeGetMatchResultResponse); \
	DECLARE_FUNCTION(execdecodeCreateServerBackfillTicketResultResponse); \
	DECLARE_FUNCTION(execdecodeCreateMatchmakingTicketResultResponse); \
	DECLARE_FUNCTION(execdecodeCancelServerBackfillTicketResultResponse); \
	DECLARE_FUNCTION(execdecodeCancelMatchmakingTicketResultResponse); \
	DECLARE_FUNCTION(execdecodeCancelAllServerBackfillTicketsForPlayerResultResponse); \
	DECLARE_FUNCTION(execdecodeCancelAllMatchmakingTicketsForPlayerResultResponse); \
	DECLARE_FUNCTION(execdecodeSubscribeToLobbyResourceResultResponse); \
	DECLARE_FUNCTION(execdecodeJoinLobbyResultResponse); \
	DECLARE_FUNCTION(execdecodeGetLobbyResultResponse); \
	DECLARE_FUNCTION(execdecodeFindLobbiesResultResponse); \
	DECLARE_FUNCTION(execdecodeFindFriendLobbiesResultResponse); \
	DECLARE_FUNCTION(execdecodeLobbyEmptyResultResponse); \
	DECLARE_FUNCTION(execdecodeCreateLobbyResultResponse);


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execdecodeRolloverContainerRegistryCredentialsResponseResponse); \
	DECLARE_FUNCTION(execdecodeRequestPartyServiceResponseResponse); \
	DECLARE_FUNCTION(execdecodeRequestMultiplayerServerResponseResponse); \
	DECLARE_FUNCTION(execdecodeListVirtualMachineSummariesResponseResponse); \
	DECLARE_FUNCTION(execdecodeListTitleMultiplayerServersQuotaChangesResponseResponse); \
	DECLARE_FUNCTION(execdecodeListQosServersForTitleResponseResponse); \
	DECLARE_FUNCTION(execdecodeListPartyQosServersResponseResponse); \
	DECLARE_FUNCTION(execdecodeListContainerImageTagsResponseResponse); \
	DECLARE_FUNCTION(execdecodeListContainerImagesResponseResponse); \
	DECLARE_FUNCTION(execdecodeListCertificateSummariesResponseResponse); \
	DECLARE_FUNCTION(execdecodeListBuildSummariesResponseResponse); \
	DECLARE_FUNCTION(execdecodeListBuildAliasesResponseResponse); \
	DECLARE_FUNCTION(execdecodeListAssetSummariesResponseResponse); \
	DECLARE_FUNCTION(execdecodeListMultiplayerServersResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetTitleMultiplayerServersQuotasResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetTitleMultiplayerServersQuotaChangeResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetTitleEnabledForMultiplayerServersStatusResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetRemoteLoginEndpointResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetMultiplayerServerLogsResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetMultiplayerServerDetailsResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetContainerRegistryCredentialsResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetBuildResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetAssetUploadUrlResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetAssetDownloadUrlResponseResponse); \
	DECLARE_FUNCTION(execdecodeEnableMultiplayerServersForTitleResponseResponse); \
	DECLARE_FUNCTION(execdecodeEmptyResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateTitleMultiplayerServersQuotaChangeResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateRemoteUserResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateBuildWithProcessBasedServerResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateBuildWithManagedContainerResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateBuildWithCustomContainerResponseResponse); \
	DECLARE_FUNCTION(execdecodeBuildAliasDetailsResponseResponse); \
	DECLARE_FUNCTION(execdecodeListServerBackfillTicketsForPlayerResultResponse); \
	DECLARE_FUNCTION(execdecodeListMatchmakingTicketsForPlayerResultResponse); \
	DECLARE_FUNCTION(execdecodeJoinMatchmakingTicketResultResponse); \
	DECLARE_FUNCTION(execdecodeGetServerBackfillTicketResultResponse); \
	DECLARE_FUNCTION(execdecodeGetQueueStatisticsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetMatchmakingTicketResultResponse); \
	DECLARE_FUNCTION(execdecodeGetMatchResultResponse); \
	DECLARE_FUNCTION(execdecodeCreateServerBackfillTicketResultResponse); \
	DECLARE_FUNCTION(execdecodeCreateMatchmakingTicketResultResponse); \
	DECLARE_FUNCTION(execdecodeCancelServerBackfillTicketResultResponse); \
	DECLARE_FUNCTION(execdecodeCancelMatchmakingTicketResultResponse); \
	DECLARE_FUNCTION(execdecodeCancelAllServerBackfillTicketsForPlayerResultResponse); \
	DECLARE_FUNCTION(execdecodeCancelAllMatchmakingTicketsForPlayerResultResponse); \
	DECLARE_FUNCTION(execdecodeSubscribeToLobbyResourceResultResponse); \
	DECLARE_FUNCTION(execdecodeJoinLobbyResultResponse); \
	DECLARE_FUNCTION(execdecodeGetLobbyResultResponse); \
	DECLARE_FUNCTION(execdecodeFindLobbiesResultResponse); \
	DECLARE_FUNCTION(execdecodeFindFriendLobbiesResultResponse); \
	DECLARE_FUNCTION(execdecodeLobbyEmptyResultResponse); \
	DECLARE_FUNCTION(execdecodeCreateLobbyResultResponse);


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabMultiplayerModelDecoder(); \
	friend struct Z_Construct_UClass_UPlayFabMultiplayerModelDecoder_Statics; \
public: \
	DECLARE_CLASS(UPlayFabMultiplayerModelDecoder, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabMultiplayerModelDecoder)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerModelDecoder_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabMultiplayerModelDecoder(); \
	friend struct Z_Construct_UClass_UPlayFabMultiplayerModelDecoder_Statics; \
public: \
	DECLARE_CLASS(UPlayFabMultiplayerModelDecoder, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabMultiplayerModelDecoder)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerModelDecoder_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabMultiplayerModelDecoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabMultiplayerModelDecoder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabMultiplayerModelDecoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabMultiplayerModelDecoder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabMultiplayerModelDecoder(UPlayFabMultiplayerModelDecoder&&); \
	NO_API UPlayFabMultiplayerModelDecoder(const UPlayFabMultiplayerModelDecoder&); \
public:


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabMultiplayerModelDecoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabMultiplayerModelDecoder(UPlayFabMultiplayerModelDecoder&&); \
	NO_API UPlayFabMultiplayerModelDecoder(const UPlayFabMultiplayerModelDecoder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabMultiplayerModelDecoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabMultiplayerModelDecoder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabMultiplayerModelDecoder)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerModelDecoder_h_26_PRIVATE_PROPERTY_OFFSET
#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerModelDecoder_h_23_PROLOG
#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerModelDecoder_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerModelDecoder_h_26_PRIVATE_PROPERTY_OFFSET \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerModelDecoder_h_26_SPARSE_DATA \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerModelDecoder_h_26_RPC_WRAPPERS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerModelDecoder_h_26_INCLASS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerModelDecoder_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerModelDecoder_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerModelDecoder_h_26_PRIVATE_PROPERTY_OFFSET \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerModelDecoder_h_26_SPARSE_DATA \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabMultiplayerModelDecoder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerModelDecoder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
