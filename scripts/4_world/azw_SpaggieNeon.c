class azw_SpaggieNeon : ItemBase
{
	azw_SpaggieNeon_Light 		m_Light_R1;
	azw_SpaggieNeon_Light		m_Light_R2;
	azw_SpaggieNeon_Light		m_Light_B1;
	azw_SpaggieNeon_Light		m_Light_B2;

	void azw_SpaggieNeon()
	{
		if (!m_Light_R1)
			CreateLight();

		if (!m_Light_R2)
			CreateLight();

		if (!m_Light_B1)
			CreateLight();

		if (!m_Light_B2)
			CreateLight();
	}
	
	void CreateLight()
	{
		if ( !GetGame().IsServer()  ||  !GetGame().IsMultiplayer() ) // client side
		{
			m_Light_R1 = azw_SpaggieNeon_Light.Cast( ScriptedLightBase.CreateLight( azw_SpaggieNeon_Light, "0 0 0") );
			m_Light_R1.AttachOnMemoryPoint(this, "light_R1");
			m_Light_R1.SetColorToRed();

			m_Light_R2 = azw_SpaggieNeon_Light.Cast( ScriptedLightBase.CreateLight( azw_SpaggieNeon_Light, "0 0 0") );
			m_Light_R2.AttachOnMemoryPoint(this, "light_R2");
			m_Light_R2.SetColorToRed();

			m_Light_B1 = azw_SpaggieNeon_Light.Cast( ScriptedLightBase.CreateLight( azw_SpaggieNeon_Light, "0 0 0") );
			m_Light_B1.AttachOnMemoryPoint(this, "light_B1");
			m_Light_B1.SetColorToBlue();

			m_Light_B2 = azw_SpaggieNeon_Light.Cast( ScriptedLightBase.CreateLight( azw_SpaggieNeon_Light, "0 0 0") );
			m_Light_B2.AttachOnMemoryPoint(this, "light_B2");
			m_Light_B2.SetColorToBlue();
		}
	}

	//================================================================
	// RESTRICTIONS
	//================================================================
	override bool CanReceiveItemIntoHands(EntityAI item_to_hands)
	{
		return false;
	}

	override bool CanSaveItemInHands(EntityAI item_in_hands)
	{
		return false;
	}

	override bool CanPutIntoHands(EntityAI parent)
	{
		return false;
	}

	override bool CanPutInCargo(EntityAI parent)
	{
		return false;
	}

	override bool IsTakeable()
	{
		return false;
	}

	override bool IsInventoryVisible()
	{
		return false;
	}	
}